/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession {

	MRCoreUtilsPairingSession* _pairingSession;
	MRCryptoPairingSessionBlockDelegate* _pairingDelegate;

}

@property (nonatomic,retain) MRCoreUtilsPairingSession * pairingSession;                         //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSessionBlockDelegate * pairingDelegate;              //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(BOOL)isPaired;
-(id)initWithDevice:(id)arg1 ;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(BOOL)hasExchangedMessage;
-(unsigned long long)state;
-(BOOL)isUsingSystemPairing;
-(BOOL)isValid;
-(void)setPairingDelegate:(MRCryptoPairingSessionBlockDelegate *)arg1 ;
-(void)setPairingSession:(MRCoreUtilsPairingSession *)arg1 ;
-(MRCryptoPairingSessionBlockDelegate *)pairingDelegate;
-(id)removePeer;
-(void)setDelegate:(id)arg1 ;
-(void)close;
-(id)updatePeer;
-(void)open;
-(MRCoreUtilsPairingSession *)pairingSession;
-(id)pairedDevices;
@end

