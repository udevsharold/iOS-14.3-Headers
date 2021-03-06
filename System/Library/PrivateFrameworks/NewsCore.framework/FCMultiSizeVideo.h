/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FCMultiSizeVideo : NSObject <NSCopying> {

	NSURL* _small;
	NSURL* _large;

}

@property (nonatomic,readonly) NSURL * small;              //@synthesize small=_small - In the implementation block
@property (nonatomic,readonly) NSURL * large;              //@synthesize large=_large - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSURL *)small;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)large;
-(id)initWithSmallVideoURL:(id)arg1 largeVideoURL:(id)arg2 ;
@end

