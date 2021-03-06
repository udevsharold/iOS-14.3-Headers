/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, TDEffectParameterType, TDEffectComponent;

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic,retain) NSNumber * intValue; 
@property (nonatomic,retain) NSNumber * floatValue; 
@property (nonatomic,retain) NSNumber * colorValue; 
@property (nonatomic,retain) NSNumber * angleValue; 
@property (nonatomic,retain) TDEffectParameterType * parameterType; 
@property (nonatomic,retain) TDEffectComponent * component; 
@property (assign,nonatomic) unsigned long long redComponent; 
@property (assign,nonatomic) unsigned long long greenComponent; 
@property (assign,nonatomic) unsigned long long blueComponent; 
+(id)keyPathsForValuesAffectingColor;
+(id)keyPathsForValuesAffectingRedComponent;
+(id)keyPathsForValuesAffectingGreenComponent;
+(id)keyPathsForValuesAffectingBlueComponent;
-(unsigned long long)greenComponent;
-(void)setRedComponent:(unsigned long long)arg1 ;
-(void)setGreenComponent:(unsigned long long)arg1 ;
-(void)setBlueComponent:(unsigned long long)arg1 ;
-(unsigned long long)redComponent;
-(unsigned long long)blueComponent;
@end

