/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface SFShareAudioSessionClient : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_ensureXPCStarted;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)progressHandler;
-(void)shareAudioProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)invalidate;
-(void)_activate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)userConfirmed;
@end

