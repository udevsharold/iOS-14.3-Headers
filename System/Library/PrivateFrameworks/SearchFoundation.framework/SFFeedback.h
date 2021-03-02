/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFFeedback : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _queryId;

}

@property (readonly) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;              //@synthesize queryId=_queryId - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)timestamp;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)queryId;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
