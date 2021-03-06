/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, RTStateDepiction, NSMutableDictionary;

@interface RTStateModelOneState : NSObject <NSSecureCoding> {

	NSUUID* _uniqueId;
	RTStateDepiction* _stateDepiction;
	NSMutableDictionary* _stateTransitions;

}

@property (nonatomic,retain) NSUUID * uniqueId;                                   //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,retain) RTStateDepiction * stateDepiction;                   //@synthesize stateDepiction=_stateDepiction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateTransitions;              //@synthesize stateTransitions=_stateTransitions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setStateTransitions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stateTransitions;
-(void)setUniqueId:(NSUUID *)arg1 ;
-(NSUUID *)uniqueId;
-(void)encodeWithCoder:(id)arg1 ;
-(RTStateDepiction *)stateDepiction;
-(void)setStateDepiction:(RTStateDepiction *)arg1 ;
@end

