/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSString, NSArray, NSDate, SFSession, NSObject, SFDevice;

@interface SFRemoteAutoFillSession : NSObject {

	BOOL _activateCalled;
	NSString* _contextBundleID;
	NSString* _contextLocalizedAppName;
	int _contextRequestState;
	NSString* _contextUnlocalizedAppName;
	NSArray* _contextAssociatedDomains;
	NSString* _contextURL;
	BOOL _invalidateCalled;
	BOOL _pairingFinishedNotified;
	NSDate* _pairClock;
	int _pairState;
	PairingSubstate _pairSubstate;
	int _passwordPickerState;
	NSString* _pickedPassword;
	NSString* _pickedUsername;
	int _sendCredentialsState;
	SFSession* _session;
	int _sessionState;
	BOOL _prefPairContactsDisabled;
	BOOL _prefPairHomeKitDisabled;
	BOOL _prefPairVerifyDisabled;
	BOOL _prefPairVisualDisabled;
	/*^block*/id _completedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	/*^block*/id _pairingFinishedHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForPickerHandler;

}

@property (nonatomic,copy) id completedHandler;                                       //@synthesize completedHandler=_completedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id pairingFinishedHandler;                                 //@synthesize pairingFinishedHandler=_pairingFinishedHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForPickerHandler;                                 //@synthesize promptForPickerHandler=_promptForPickerHandler - In the implementation block
-(void)_run;
-(int)_runPair;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)init;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(int)_runPairVerify;
-(void)_cleanup;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)tryPIN:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(int)_runSessionStart;
-(int)_runPairPIN;
-(int)_runContextRequest;
-(int)_runPasswordPicker;
-(int)_runSendCredentials;
-(int)_runPairHomeKit;
-(int)_runPairContacts;
-(int)_runPairVisual;
-(void)_handleContextRequestResponse:(id)arg1 error:(id)arg2 ;
-(void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2 ;
-(void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3 ;
-(id)completedHandler;
-(void)setCompletedHandler:(id)arg1 ;
-(id)pairingFinishedHandler;
-(void)setPairingFinishedHandler:(id)arg1 ;
-(id)promptForPickerHandler;
-(void)setPromptForPickerHandler:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)invalidate;
-(void)_completedWithError:(id)arg1 ;
@end

