/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSString, NSArray;

@interface FCNewsletterSubscribeCommand : FCCommand {

	NSString* _newsletter;
	NSArray* _includeArray;

}

@property (nonatomic,copy) NSString * newsletter;               //@synthesize newsletter=_newsletter - In the implementation block
@property (nonatomic,copy) NSArray * includeArray;              //@synthesize includeArray=_includeArray - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNewsletter:(id)arg1 includeArray:(id)arg2 ;
-(NSString *)newsletter;
-(NSArray *)includeArray;
-(void)setNewsletter:(NSString *)arg1 ;
-(void)setIncludeArray:(NSArray *)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

