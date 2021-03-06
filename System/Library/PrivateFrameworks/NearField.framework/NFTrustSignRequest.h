/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFTrustObject.h>

@class NSData;

@interface NFTrustSignRequest : NFTrustObject {

	NSData* _challenge;
	NSData* _data;

}

@property (nonatomic,retain) NSData * challenge;              //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSData * data;                   //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)signRequestWithChallenge:(id)arg1 data:(id)arg2 ;
-(NSData *)data;
-(NSData *)challenge;
-(id)initWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setChallenge:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

