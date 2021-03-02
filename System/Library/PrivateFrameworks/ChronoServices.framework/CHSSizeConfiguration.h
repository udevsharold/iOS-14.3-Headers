/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CHSSizeConfiguration : NSObject <NSSecureCoding> {

	CGSize _smallSize;
	CGSize _mediumSize;
	CGSize _largeSize;

}

@property (nonatomic,readonly) CGSize smallSize;               //@synthesize smallSize=_smallSize - In the implementation block
@property (nonatomic,readonly) CGSize mediumSize;              //@synthesize mediumSize=_mediumSize - In the implementation block
@property (nonatomic,readonly) CGSize largeSize;               //@synthesize largeSize=_largeSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGSize)largeSize;
-(CGSize)mediumSize;
-(id)initWithSmallSize:(CGSize)arg1 mediumSize:(CGSize)arg2 largeSize:(CGSize)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)smallSize;
-(void)encodeWithCoder:(id)arg1 ;
@end
