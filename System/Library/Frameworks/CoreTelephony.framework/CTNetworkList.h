/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding> {

	BOOL _moreComing;
	NSMutableArray* _networks;

}

@property (nonatomic,retain) NSMutableArray * networks;              //@synthesize networks=_networks - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                        //@synthesize moreComing=_moreComing - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)networks;
-(BOOL)moreComing;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(void)setMoreComing:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end
