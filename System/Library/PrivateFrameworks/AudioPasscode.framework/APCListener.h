/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AUPasscodeCodecConfiguration, APCListenerEngine, APCListenerResultData, NSObject;

@interface APCListener : NSObject {

	AUPasscodeCodecConfiguration* _codecConfig;
	APCListenerEngine* _listenerEngine;
	APCListenerResultData* _resultData;
	/*^block*/id _retrievedDataHandler;
	/*^block*/id _invalidationHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy) id retrievedDataHandler;                                   //@synthesize retrievedDataHandler=_retrievedDataHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)capabilityData;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)stopListening;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)startListening;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startListeningWithError:(id*)arg1 ;
-(BOOL)getResultData:(id*)arg1 ;
-(id)initWithConfigurationData:(id)arg1 ;
-(void)setRetrievedDataHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)retrievedDataHandler;
-(id)initWithCodecConfiguration:(id)arg1 ;
@end

