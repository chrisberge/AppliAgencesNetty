//
//  Infos.m
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 25/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Infos.h"

@implementation Infos

@synthesize coordonnees_globales,
            coordonnees_postales,
            email_agence,
            fax_agence,
            nom_appli,
            presentation_agence,
            site_agence,
            telephone_agence,
            header_image,
            background_image,
            icone_image,
            default_image,
            footer_biens_image,
            footer_favoris_image,
            footer_agence_image,
            footer_contact_image;

- (void) dealloc {
    [coordonnees_globales release];
    [coordonnees_postales release];
    [email_agence release];
    [fax_agence release];
    [nom_appli release];
    [presentation_agence release];
    [site_agence release];
    [telephone_agence release];
    [header_image release];
    [background_image release];
    [icone_image release];
    [default_image release];
    [footer_biens_image release];
    [footer_favoris_image release];
    [footer_agence_image release];
    [footer_contact_image release];
    [super dealloc]; 
}

@end
