/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	BOOL _recording;
	BOOL _paused;
	long long _settingsID;
	NSURL* _outputFileURL;
	NSString* _outputFileType;
	NSArray* _metadata;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	NSArray* _connections;

}

@property (readonly) long long settingsID;                                            //@synthesize settingsID=_settingsID - In the implementation block
@property (readonly) NSURL * outputFileURL;                                           //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSString * outputFileType;                                         //@synthesize outputFileType=_outputFileType - In the implementation block
@property (retain) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;              //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) NSArray * connections;                                           //@synthesize connections=_connections - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                       //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                             //@synthesize paused=_paused - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(BOOL)isRecording;
-(NSArray *)metadata;
-(long long)settingsID;
-(NSArray *)connections;
-(void)dealloc;
-(NSString *)outputFileType;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(BOOL)isPaused;
-(NSURL *)outputFileURL;
-(void)setRecording:(BOOL)arg1 ;
@end

