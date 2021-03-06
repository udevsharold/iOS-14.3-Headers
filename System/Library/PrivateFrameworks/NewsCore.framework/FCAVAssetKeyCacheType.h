/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCAVAssetKeyCacheType
@required
-(id)interestTokenForKeyURIs:(id)arg1;
-(id)assetKeyForURI:(id)arg1;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4;
-(id)keyServerCertificate;
-(void)importAVAssetKey:(id)arg1;
-(void)removeAllAssetKeys;
-(void)saveKeyServerCertificate:(id)arg1;
-(void)clearKeyServerCertificate;

@end

