/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _FBSCDHashCacheInfo : NSObject {

	unsigned _cachedCodeDirectoryHashType;
	NSData* _cachedCodeDirectoryHash;

}

@property (nonatomic,readonly) NSData * cachedCodeDirectoryHash;                  //@synthesize cachedCodeDirectoryHash=_cachedCodeDirectoryHash - In the implementation block
@property (nonatomic,readonly) unsigned cachedCodeDirectoryHashType;              //@synthesize cachedCodeDirectoryHashType=_cachedCodeDirectoryHashType - In the implementation block
+(id)cacheInfoWithData:(id)arg1 hashType:(unsigned)arg2 ;
-(NSData *)cachedCodeDirectoryHash;
-(unsigned)cachedCodeDirectoryHashType;
@end
