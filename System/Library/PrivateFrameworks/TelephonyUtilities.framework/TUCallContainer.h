/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallContainerPrivate.h>
#import <libobjc.A.dylib/TUCallContainer.h>
@class NSArray, TUCall;


@protocol TUCallContainer <NSObject>
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@required
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)callPassingTest:(/*^block*/id)arg1;
-(id)displayedCallFromCalls:(id)arg1;
-(NSArray *)displayedAudioAndVideoCalls;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1;
-(id)audioAndVideoCallsWithStatus:(int)arg1;
-(id)callsPassingTest:(/*^block*/id)arg1;
-(NSArray *)conferenceParticipantCalls;
-(id)callWithStatus:(int)arg1;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1;
-(id)callsWithGroupUUID:(id)arg1;
-(NSArray *)currentCallGroups;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(TUCall *)currentVideoCall;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(TUCall *)incomingCall;
-(id)audioOrVideoCallWithStatus:(int)arg1;
-(unsigned long long)currentVideoCallCount;
-(NSArray *)incomingCalls;
-(NSArray *)currentAudioAndVideoCalls;
-(id)callWithUniqueProxyIdentifier:(id)arg1;
-(NSArray *)callsHostedElsewhere;
-(id)callWithCallUUID:(id)arg1;
-(NSArray *)displayedCalls;
-(id)videoCallWithStatus:(int)arg1;
-(unsigned long long)currentAudioAndVideoCallCount;
-(NSArray *)currentAudioAndVideoCallGroups;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1;
-(id)callsWithStatus:(int)arg1;
-(BOOL)hasCurrentVideoCalls;
-(TUCall *)incomingVideoCall;
-(TUCall *)activeVideoCall;
-(NSArray *)currentVideoCalls;
-(BOOL)allCallsAreOfService:(int)arg1;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(unsigned long long)currentCallCount;
-(BOOL)hasCurrentCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(NSArray *)currentCalls;
-(BOOL)hasCurrentAudioCalls;

@end


@class NSArray, TUCall, NSString;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer> {

	NSArray* _calls;

}

@property (nonatomic,copy) NSArray * calls;                                                    //@synthesize calls=_calls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TUCall *)frontmostAudioOrVideoCall;
-(BOOL)existingCallsHaveMultipleProviders;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)_allCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(TUCall *)frontmostCall;
-(NSArray *)callsOnDefaultPairedDevice;
-(TUCall *)conferenceCall;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(NSArray *)displayedAudioAndVideoCalls;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)calls;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)conferenceParticipantCalls;
-(id)callWithStatus:(int)arg1 ;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(id)callsWithGroupUUID:(id)arg1 ;
-(NSArray *)currentCallGroups;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(TUCall *)currentVideoCall;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(TUCall *)incomingCall;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(unsigned long long)currentVideoCallCount;
-(NSArray *)incomingCalls;
-(NSArray *)currentAudioAndVideoCalls;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(NSArray *)callsHostedElsewhere;
-(id)callWithCallUUID:(id)arg1 ;
-(NSArray *)displayedCalls;
-(id)videoCallWithStatus:(int)arg1 ;
-(TUCall *)displayedCall;
-(unsigned long long)currentAudioAndVideoCallCount;
-(NSArray *)currentAudioAndVideoCallGroups;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(id)callsWithStatus:(int)arg1 ;
-(BOOL)hasCurrentVideoCalls;
-(TUCall *)incomingVideoCall;
-(TUCall *)activeVideoCall;
-(NSArray *)currentVideoCalls;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(unsigned long long)currentCallCount;
-(BOOL)hasCurrentCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(NSArray *)currentCalls;
-(BOOL)hasCurrentAudioCalls;
-(id)init;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(id)initWithCalls:(id)arg1 ;
-(void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(/*^block*/id)arg2 forCallsPassingTest:(/*^block*/id)arg3 ;
-(id)callPassingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)setCalls:(NSArray *)arg1 ;
-(void)enumerateCallsInvokingBlock:(/*^block*/id)arg1 forCallsPassingTest:(/*^block*/id)arg2 ;
@end

