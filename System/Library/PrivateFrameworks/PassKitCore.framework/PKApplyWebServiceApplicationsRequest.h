/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL;

@interface PKApplyWebServiceApplicationsRequest : PKApplyWebServiceRequest {

	NSURL* _applyServiceURL;

}

@property (nonatomic,retain) NSURL * applyServiceURL;              //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSURL *)applyServiceURL;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

