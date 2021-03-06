/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest {

	STEmailMessage* _message;

}
+(BOOL)supportsSecureCoding;
-(id)message;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithMessage:(id)arg1 ;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(void)encodeWithCoder:(id)arg1 ;
@end

