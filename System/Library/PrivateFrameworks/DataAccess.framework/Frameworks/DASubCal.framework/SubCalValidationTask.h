/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DASubCal/SubCalDATask.h>
#import <libobjc.A.dylib/SubCalURLRequestDelegate.h>

@protocol SubCalValidationTaskDelegate;
@class NSURL, NSString, SubCalURLRequest, NSData, ICSDocument;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate> {

	BOOL _performQuickValidation;
	BOOL _foundBeginVCal;
	BOOL _foundCalName;
	id<SubCalValidationTaskDelegate> _delegate;
	NSURL* _subscriptionURL;
	NSString* _username;
	NSString* _password;
	SubCalURLRequest* _request;
	NSData* _icsData;
	ICSDocument* _icsDocument;
	NSString* _calendarName;
	unsigned long long _searchIndex;

}

@property (nonatomic,retain) SubCalURLRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * icsData;                                              //@synthesize icsData=_icsData - In the implementation block
@property (nonatomic,retain) ICSDocument * icsDocument;                                     //@synthesize icsDocument=_icsDocument - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                                       //@synthesize calendarName=_calendarName - In the implementation block
@property (assign,nonatomic) BOOL foundBeginVCal;                                           //@synthesize foundBeginVCal=_foundBeginVCal - In the implementation block
@property (assign,nonatomic) BOOL foundCalName;                                             //@synthesize foundCalName=_foundCalName - In the implementation block
@property (assign,nonatomic) unsigned long long searchIndex;                                //@synthesize searchIndex=_searchIndex - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalValidationTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                                       //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
@property (nonatomic,retain) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL performQuickValidation;                                   //@synthesize performQuickValidation=_performQuickValidation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(SubCalURLRequest *)request;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(void)setRequest:(SubCalURLRequest *)arg1 ;
-(NSData *)icsData;
-(void)setIcsData:(NSData *)arg1 ;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(void)didFinish;
-(NSURL *)subscriptionURL;
-(void)setDelegate:(id<SubCalValidationTaskDelegate>)arg1 ;
-(unsigned long long)searchIndex;
-(void)performTask;
-(void)setSearchIndex:(unsigned long long)arg1 ;
-(id<SubCalValidationTaskDelegate>)delegate;
-(void)setPerformQuickValidation:(BOOL)arg1 ;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2 ;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(ICSDocument *)icsDocument;
-(BOOL)performQuickValidation;
-(void)_tryQuickValidationCurrentData:(id)arg1 ;
-(void)setIcsDocument:(ICSDocument *)arg1 ;
-(void)setFoundBeginVCal:(BOOL)arg1 ;
-(BOOL)foundCalName;
-(void)setFoundCalName:(BOOL)arg1 ;
-(id)_stringBeforeNewline:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)foundBeginVCal;
-(BOOL)_isInvalidVCalBeginningForData:(id)arg1 ;
-(id)_searchForCalNameInConnectionData:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 ;
@end

