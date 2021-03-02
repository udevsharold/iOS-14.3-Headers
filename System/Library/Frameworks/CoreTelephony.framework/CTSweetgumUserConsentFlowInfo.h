/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding> {

	NSString* _webURL;
	NSString* _postData;

}

@property (nonatomic,retain) NSString * webURL;                //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,retain) NSString * postData;              //@synthesize postData=_postData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)webURL;
-(NSString *)postData;
-(void)setWebURL:(NSString *)arg1 ;
-(void)setPostData:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
