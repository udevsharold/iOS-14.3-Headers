/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKCloudStoreCoding <NSSecureCoding>
@optional
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;

@required
+(id)recordNamePrefix;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(void)encodeWithCloudStoreCoder:(id)arg1;
-(id)initWithCloudStoreCoder:(id)arg1;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1;

@end
