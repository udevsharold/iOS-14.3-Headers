/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying> {

	int _fd;
	NSString* _path;

}

@property (nonatomic,readonly) int fd;                       //@synthesize fd=_fd - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)tempfileDescrWithFd:(int)arg1 path:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(unsigned long long)hash;
-(BOOL)isEqualToTempfileDescr:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFd:(int)arg1 path:(id)arg2 ;
-(int)fd;
@end

