/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSTip.h>

@class NSAttributedString, NSDictionary;

@interface TPSDiscoverabilityTip : TPSTip {

	NSAttributedString* _attributedString;
	NSDictionary* _preconditions;

}

@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * preconditions;                         //@synthesize preconditions=_preconditions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setPreconditions:(NSDictionary *)arg1 ;
-(NSDictionary *)preconditions;
-(void)encodeWithCoder:(id)arg1 ;
@end

