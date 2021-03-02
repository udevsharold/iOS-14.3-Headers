/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSPortalSource : NSObject <NSCopying, NSSecureCoding> {

	unsigned _sourceContextID;
	unsigned long long _sourceLayerRenderID;

}

@property (nonatomic,readonly) unsigned long long sourceLayerRenderID;              //@synthesize sourceLayerRenderID=_sourceLayerRenderID - In the implementation block
@property (nonatomic,readonly) unsigned sourceContextID;                            //@synthesize sourceContextID=_sourceContextID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)sourceContextID;
-(unsigned long long)sourceLayerRenderID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSourceContextID:(unsigned)arg1 sourceLayerRenderID:(unsigned long long)arg2 ;
@end
