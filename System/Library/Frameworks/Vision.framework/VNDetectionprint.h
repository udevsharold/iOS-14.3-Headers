/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary;

@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	NSDictionary* _tensorsDictionary;
	unsigned long long _requestRevision;

}

@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
+(id)knownTensorKeysForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tensorForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithTensorsDictionary:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
@end
