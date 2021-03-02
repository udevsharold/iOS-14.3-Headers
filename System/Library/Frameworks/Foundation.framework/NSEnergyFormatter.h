/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForFoodEnergyUse;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;              //@synthesize isForFoodEnergyUse=_isForFoodEnergyUse - In the implementation block
-(void)receiveObservedValue:(id)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(long long)unitStyle;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(void)setUnitStyle:(long long)arg1 ;
-(void)dealloc;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(long long)targetUnitFromJoules:(double)arg1 ;
-(id)stringFromJoules:(double)arg1 ;
-(void)setForFoodEnergyUse:(BOOL)arg1 ;
-(BOOL)isForFoodEnergyUse;
-(void)encodeWithCoder:(id)arg1 ;
@end
