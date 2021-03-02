/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class AWDServerConnection, NSString;

@interface MSDiagnosticManager : NSObject <EFLoggable> {

	AWDServerConnection* _awdServerConnection;

}

@property (nonatomic,readonly) AWDServerConnection * awdServerConnection;              //@synthesize awdServerConnection=_awdServerConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(AWDServerConnection *)awdServerConnection;
-(void)submitComposeAttachmentReport:(id)arg1 ;
-(BOOL)submitWithIdentifier:(unsigned)arg1 metricGenerator:(/*^block*/id)arg2 ;
-(void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4 ;
-(void)submitMessageLoadingReport:(id)arg1 ;
-(void)submitFetchMetricsReport:(id)arg1 ;
@end
