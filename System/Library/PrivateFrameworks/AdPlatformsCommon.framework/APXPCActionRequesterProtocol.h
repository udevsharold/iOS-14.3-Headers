/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, Protocol;


@protocol APXPCActionRequesterProtocol <NSObject>
@property (nonatomic,readonly) NSUUID * delegateID; 
@property (nonatomic,readonly) id exportedObject; 
@property (nonatomic,readonly) Protocol * exportedInterface; 
@optional
-(id)exportedObject;
-(Protocol *)exportedInterface;
-(void)extendCollectionClassesForExportedInterface:(id)arg1;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1;

@required
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(id)remoteObjectInterface;
-(NSUUID *)delegateID;

@end

