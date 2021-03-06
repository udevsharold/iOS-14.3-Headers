/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUAdjustment.h>

@class NSMutableDictionary, NSDictionary;

@interface NUGenericAdjustment : NUAdjustment {

	NSMutableDictionary* _settings;

}

@property (nonatomic,copy) NSDictionary * settings; 
-(void)setSettings:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSDictionary *)settings;
-(id)initWithAdjustmentSchema:(id)arg1 ;
@end

