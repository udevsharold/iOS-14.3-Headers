/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCTouchInput.h>

@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput {

	BOOL _isInflectionPoint;
	NSArray* _nearbyKeys;
	RefPtr<TI::Favonius::CMTouchHistory>* _touchHistory;

}

@property (nonatomic,readonly) RefPtr<TI::Favonius::CMTouchHistory>* touchHistory;              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) BOOL isInflectionPoint;                                          //@synthesize isInflectionPoint=_isInflectionPoint - In the implementation block
@property (nonatomic,readonly) NSArray * nearbyKeys;                                            //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(RefPtr<TI::Favonius::CMTouchHistory>*)touchHistory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)nearbyKeys;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(BOOL)arg4 touchHistory:(const RefPtr<TI::Favonius::CMTouchHistory>*)arg5 ;
-(BOOL)isInflectionPoint;
@end

