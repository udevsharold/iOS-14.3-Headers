/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPBeaconPayloadCaching <NSObject>
@required
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2;

@end

