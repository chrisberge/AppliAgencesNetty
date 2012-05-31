//
//  XMLParserVilles.h
//  AppliAgenceVilles
//
//  Created by Christophe Bergé on 04/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Ville.h"
#import "AppliAgencesNettyAppDelegate.h"

@class AppliAgencesNettyAppDelegate, Ville;

@interface XMLParserVilles : NSObject{
	NSMutableString *currentElementValue;
	Ville *uneVille;
	AppliAgencesNettyAppDelegate *appDelegate;
}

- (XMLParserVilles *) initXMLParser;

@end
