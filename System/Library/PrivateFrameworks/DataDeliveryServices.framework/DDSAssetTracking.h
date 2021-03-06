/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSAssetTracking <NSObject>
@property (nonatomic,retain) id<DDSAssetTrackingDelegate> delegate; 
@required
-(void)removeAssertionWithID:(id)arg1;
-(id)assertionDueForUpdateSinceDate:(id)arg1;
-(id)allAssertions;
-(id)trackedAssetTypes;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)setDelegate:(id)arg1;
-(id)assertionIDsForClientID:(id)arg1;
-(void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
-(id<DDSAssetTrackingDelegate>)delegate;

@end

