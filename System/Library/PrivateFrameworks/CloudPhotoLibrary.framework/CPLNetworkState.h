/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path;
@class NSObject, NSDictionary;

@interface CPLNetworkState : NSObject {

	BOOL _cellularRestricted;
	BOOL _inAirplaneMode;
	NSObject*<OS_nw_path> _networkPath;

}

@property (nonatomic,readonly) NSObject*<OS_nw_path> networkPath;                                //@synthesize networkPath=_networkPath - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isCellularRestricted,nonatomic,readonly) BOOL cellularRestricted;              //@synthesize cellularRestricted=_cellularRestricted - In the implementation block
@property (getter=isInAirplaneMode,nonatomic,readonly) BOOL inAirplaneMode;                      //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork; 
@property (nonatomic,readonly) NSDictionary * plistDescription; 
-(BOOL)isConstrained;
-(BOOL)isCellularRestricted;
-(BOOL)isCellular;
-(id)description;
-(BOOL)isConnected;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isInAirplaneMode;
-(id)redactedDescription;
-(BOOL)canUseNetwork;
-(id)initWithNetworkPath:(id)arg1 cellularRestricted:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(NSDictionary *)plistDescription;
-(BOOL)isFunctionallyEqual:(id)arg1 ;
-(NSObject*<OS_nw_path>)networkPath;
@end
