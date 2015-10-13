#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include "CharacterBackground.h"
#include "Die.h"

using namespace std;

CharacterBackground::CharacterBackground()
{
}

CharacterBackground::CharacterBackground( string background, string align )
{
	//initialized the charBackground to the one the user chose
	die1D6 = new Die( 6, 1 );
	die1D8 = new Die( 8, 1 );

	populateCrimMap();
	populateFolkMap();
	populateHermitMap();

	alignment = align;
	backgroundType = background;
	setPersonalityTrait( background );
	setIdeal( background, alignment );
	setBond( background );
	setFlaw( background );
}

void CharacterBackground::populateCrimMap()
{
	crimTrait.insert( { 1, "I always have a plan for what to do when things go wrong." } );
	crimTrait.insert( { 2, "I am always calm, no matter what the situation.I never raise my voice or let my emotions control me." } );
	crimTrait.insert( { 3, "The first thing I do in a new place is note the locations of everything valuable - or where such things could be hidden." } );
	crimTrait.insert( { 4, "I would rather make a new friend than a new enemy." } );
	crimTrait.insert( { 5, "I am incredibly slow to trust.Those who seem the fairest often have the most to hide." } );
	crimTrait.insert( { 6, "I dont pay attention to the risks in a situation. Never tell me the odds." } );
	crimTrait.insert( { 7, "The best way to get me to do something is to tell me I can't do it." } );
	crimTrait.insert( { 8, "I blow up at the slightest insult." } );

	crimIdeal.insert( { "Lawful", "I don't steal from others in the trade." } );
	crimIdeal.insert( { "Chaotic", "Chains are meant to be broken, as are those who would forge them." });
	crimIdeal.insert( { "Evil", "I will do whatever it takes to become wealthy." } );
	crimIdeal.insert( { "Neutral", "I'm loyal to my friends, not to any ideals, and everyone else can take a trip down the Styx for all I care." } );
	crimIdeal.insert( { "Good", "There's a spark of good in everyone." } );

	crimBond.insert( { 1, "I'm trying to pay off an old debt I owe to a generous benefactor." } );
	crimBond.insert( { 2, "My ill gotten gains go to support my family." } );
	crimBond.insert( { 3, "Something important was taken from me, and I aim to steal it back." } );
	crimBond.insert( { 4, "I will become the greatest theif that ever lived." } );
	crimBond.insert( { 5, "I'm guilty of a terrible crime. I hope I can redeem myself for it." } );
	crimBond.insert( { 6, "Someone I loved died because of a mistake I made.That will never happen again." } );

	crimFlaw.insert( { 1, "When I see something valuable, I can't think about anything but how to steal it." } );
	crimFlaw.insert( { 2, "When faced with a choice between money and my friends, I usually choose the money." } );
	crimFlaw.insert( { 3, "If there's a plan, I'll forget it.If I don't forget it, I'll ignore it." } );
	crimFlaw.insert( { 4, "I have a 'tell' that reveals when I'm lying." } );
	crimFlaw.insert( { 5, "I turn tail and run when things look bad." } );
	crimFlaw.insert( { 6, "An innocent person is in prison for a crime that I commited.I'm okay with that." } );
}

void CharacterBackground::populateFolkMap()
{
	folkTrait.insert( { 1, "I judge people by their actions, not their words." } );
	folkTrait.insert( { 2, "If someone is in trouble, I'm always ready to lend help." } );
	folkTrait.insert( { 3, "When I set my mind to something, I follow through no matter what gets in my way." } );
	folkTrait.insert( { 4, "I have a strong sense of fair play and always try to find the most equitable solution to arguments." } );
	folkTrait.insert( { 5, "I'm confident in my own abilities and do what I can to instill confidence in others." } );
	folkTrait.insert( { 6, "Thinking is for other people.I prefer action." } );
	folkTrait.insert( { 7, "I misuse long words in an attempt to sound smarter." } );
	folkTrait.insert( { 8, "I get bored easily. When am I going to get on with my destiny?" } );

	folkIdeal.insert( { "Good", "People deserve to be treated with dignity and respect." } );
	folkIdeal.insert( { "Lawful", "No one should get preferential treatment before the law, and no one is above the law." } );
	folkIdeal.insert( { "Chaotic", "Tyrants must not be allowed to oppress the people." } );
	folkIdeal.insert( { "Evil", "If I become strong, I can take what I want - what I deserve." } );
	folkIdeal.insert( { "Neutral", "There's no good in pretending to be something I'm not." } );

	folkBond.insert( { 1, "I have family, but I have no idea where they are.One day, I hope to see them again." } );
	folkBond.insert( { 2, "I worked the land, I love the land, and I will protect the land." } );
	folkBond.insert( { 3, "A proud noble once gave me a horrible beating, and I wil take my revenge on any bully I encounter." } );
	folkBond.insert( { 4, "My tools are symbols of my past life, and I carry them so that i will never forget my roots." } );
	folkBond.insert( { 5, "I protect those who cannot protect themselves." } );
	folkBond.insert( { 6, "I wish my childhood sweetheart had come with me to pursue my destiny." } );
	
	folkFlaw.insert( { 1, "The tyrant who rules my land will stop at nothing to see me killed." } );
	folkFlaw.insert( { 2, "I'm convinced of the significance of my destiny, and blind to my shortcomings and the risk of failure." } );
	folkFlaw.insert( { 3, "The people who knew me when I was young konw my shameful secret, so I can never go home again." } );
	folkFlaw.insert( { 4, "I have a weakness for the vices of the city, especially hard drink." } );
	folkFlaw.insert( { 5, "Secretly, I believe that things would be better if I were a tyrant lording over the land." } );
	folkFlaw.insert( { 6, "I have trouble trusting in my allies." } );
}

void CharacterBackground::populateHermitMap()
{
	hermitTrait.insert( { 1, "I've been isolated for so long that I rarely speak, preferring gestures and the occasional grunt." } );
	hermitTrait.insert( { 2, "I am utterly serene, even in the face of disaster." } );
	hermitTrait.insert( { 3, "The leader of my community had something wise to say on every topic, and I am eager to share that wisdom." } );
	hermitTrait.insert( { 4, "I feel tremendeous empathy for all who suffer." } );
	hermitTrait.insert( { 5, "I'm oblivious to etiquette and social expectations." } );
	hermitTrait.insert( { 6, "I connect everything that happens to me to a grand, cosmic plan." } );
	hermitTrait.insert( { 7, "I often get lost in my own thoughts and contemplation, becoming oblivious to my surroundings." } );
	hermitTrait.insert( { 8, "I am working on a grand philosophical theory and love sharing my ideas." } );

	hermitIdeal.insert( { "Good", "Greater Good.My gifts are meant to be shared with all, not used for my own benefit." } );
	hermitIdeal.insert( { "Lawful", "Logic.Emotions must not cloud our sense of what is right and true, or our logical thinking." } );
	hermitIdeal.insert( { "Chaotic", "Free Thinking.Inquiry and curiosty are the pillars of progress." } );
	hermitIdeal.insert( { "Evil", "Power.Solitude and contemplation are paths toward mytical or magical power." } );
	hermitIdeal.insert( { "Neutral", "Live and Let Live.Meddling in the affairs of others only causes trouble." } );
	
	hermitBond.insert( { 1, "Nothing is more important than the other memebers of my hermitage, order, or association." } );
	hermitBond.insert( { 2, "I entered seclusion to hide from the ones who might still be hunting me.I must someday confront them." } );
	hermitBond.insert( { 3, "I'm still seeking the enlightenment I pursued in my seclusion, and it still eludes me." } );
	hermitBond.insert( { 4, "I entered seclusion because I loved someone I could not have." } );
	hermitBond.insert( { 5, "Should my discovery come to light, it could bring ruin to the world." } );
	hermitBond.insert( { 6, "My isolation gave me great insight into a great evil that only I can destroy." } );
	
	hermitFlaw.insert( { 1, "Now that I've returned to the world, I enjoy its delights a little too much." } );
	hermitFlaw.insert( { 2, "I harbour dark, bloodthirsty thoughts that my isolation and meditation failed to quell." } );
	hermitFlaw.insert( { 3, "I am dogmatic in my thoughts and philosophy." } );
	hermitFlaw.insert( { 4, "I let my need to win arguments overshadow friendships and harmony." } );
	hermitFlaw.insert( { 5, "I'd risk too much to uncover a lost bit of knowledge." } );
	hermitFlaw.insert( { 6, "I like keeping secrets and won't share them with anyone." } );
}

CharacterBackground::~CharacterBackground()
{
	delete die1D6;
	delete die1D8;
}

void CharacterBackground::setPersonalityTrait( string background ) 
{
	if ( background.compare("Criminal") == 0 )
		personalityTrait = crimTrait.at( die1D8->rollDie() );
	else if ( background.compare("Folk Hero") == 0 )
		personalityTrait = folkTrait.at( die1D8->rollDie() );
	else if ( background.compare("Hermit") == 0 )
		personalityTrait = hermitTrait.at( die1D8->rollDie() );
}

void CharacterBackground::setIdeal( string background, string alignment ) 
{
	if (background.compare("Criminal") == 0)
		ideal = crimIdeal.at( alignment );
	else if (background.compare("Folk Hero") == 0)
		ideal = folkIdeal.at( alignment );
	else if (background.compare("Hermit") == 0)
		ideal = hermitIdeal.at( alignment );
}

void CharacterBackground::setBond( string background ) 
{
	if ( background.compare("Criminal") == 0 )
		bond = crimBond.at( die1D6->rollDie() );
	else if ( background.compare("Folk Hero") == 0 )
		bond = folkBond.at( die1D6->rollDie() );
	else if (background.compare("Hermit") == 0)
		bond = hermitBond.at( die1D6->rollDie() );
}

void CharacterBackground::setFlaw( string background ) 
{
	if ( background.compare("Criminal") == 0 )
		flaw = crimFlaw.at( die1D6->rollDie() );
	else if (background.compare("Folk Hero") == 0)
		flaw = folkFlaw.at( die1D6->rollDie() );
	else if (background.compare("Hermit") == 0)
		flaw = hermitFlaw.at( die1D6->rollDie() );
}

string CharacterBackground::getPersonalityTrait()
{
	return personalityTrait; 
}

string CharacterBackground::getIdeal()
{
	return ideal;
}

string CharacterBackground::getBond()
{
	return bond;
}

string CharacterBackground::getFlaw()
{
	return flaw;
}

string CharacterBackground::getBackgroundType()
{
	return backgroundType;
}
