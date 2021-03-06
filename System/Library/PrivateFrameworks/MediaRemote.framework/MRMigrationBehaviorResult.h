/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface MRMigrationBehaviorResult : NSObject {

	NSString* _sourceUID;
	NSString* _destinationUID;
	long long _action;
	NSString* _reason;
	NSError* _error;

}

@property (nonatomic,retain) NSString * sourceUID;                   //@synthesize sourceUID=_sourceUID - In the implementation block
@property (nonatomic,retain) NSString * destinationUID;              //@synthesize destinationUID=_destinationUID - In the implementation block
@property (assign,nonatomic) long long action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSString *)sourceUID;
-(unsigned long long)hash;
-(void)setAction:(long long)arg1 ;
-(id)description;
-(NSString *)reason;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)destinationUID;
-(void)setSourceUID:(NSString *)arg1 ;
-(void)setDestinationUID:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(long long)action;
@end

