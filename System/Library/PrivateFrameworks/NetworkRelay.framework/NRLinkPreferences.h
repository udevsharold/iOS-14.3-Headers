/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRLinkPreferences : NSObject <NSCopying> {

	unsigned char _linkType;

}

@property (nonatomic,readonly) unsigned char linkType;              //@synthesize linkType=_linkType - In the implementation block
+(id)createFromEncodedXPCDict:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(unsigned char)linkType;
-(id)description;
-(BOOL)isNotEmpty;
-(id)copyShortDescription;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
@end
