/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioStoreContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding> {

	NSDictionary* _trackInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * trackInfo;              //@synthesize trackInfo=_trackInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)rawContentDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2 ;
-(NSDictionary *)trackInfo;
-(void)encodeWithCoder:(id)arg1 ;
@end

