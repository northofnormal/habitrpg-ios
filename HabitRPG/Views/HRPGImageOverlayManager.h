//
//  HRPGImageOverlayManager.h
//  Habitica
//
//  Created by viirus on 25/09/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HRPGImageOverlayManager : NSObject {
    
}

+ (id)sharedManager;


+ (void)displayImageWithString:(NSString*)image withText:(NSString*)text withNotes:(NSString*)notes;
+ (void)displayImage:(UIImage*)image withText:(NSString*)text withNotes:(NSString*)notes;

@end
