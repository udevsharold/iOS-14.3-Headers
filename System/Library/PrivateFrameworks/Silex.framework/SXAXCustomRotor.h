/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface SXAXCustomRotor : UIAccessibilityCustomRotor {

	NSOrderedSet* _rotorItems;

}

@property (nonatomic,copy) NSOrderedSet * rotorItems;              //@synthesize rotorItems=_rotorItems - In the implementation block
+(id)rotorWithName:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(id)rotorItemBefore:(id)arg1 ;
-(id)rotorItemAfter:(id)arg1 ;
-(long long)indexOfRotorItem:(id)arg1 ;
-(NSOrderedSet *)rotorItems;
-(void)setRotorItems:(NSOrderedSet *)arg1 ;
@end
