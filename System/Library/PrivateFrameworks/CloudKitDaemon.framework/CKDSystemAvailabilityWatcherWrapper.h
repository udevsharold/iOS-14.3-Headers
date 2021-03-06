/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDSystemAvailabilityWatcher;
@class NSString;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject {

	id<CKDSystemAvailabilityWatcher> _delegate;
	unsigned long long _savedDelegateHash;
	NSString* _personaID;

}

@property (assign,nonatomic,__weak) id<CKDSystemAvailabilityWatcher> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long savedDelegateHash;                          //@synthesize savedDelegateHash=_savedDelegateHash - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                            //@synthesize personaID=_personaID - In the implementation block
-(void)postSystemAvailabilityChanged:(unsigned long long)arg1 ;
-(void)setPersonaID:(NSString *)arg1 ;
-(NSString *)personaID;
-(unsigned long long)hash;
-(id)initWithDelegate:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDelegate:(id<CKDSystemAvailabilityWatcher>)arg1 ;
-(unsigned long long)savedDelegateHash;
-(void)setSavedDelegateHash:(unsigned long long)arg1 ;
-(id<CKDSystemAvailabilityWatcher>)delegate;
@end

