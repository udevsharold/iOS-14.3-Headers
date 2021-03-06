/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@protocol SUScriptXMLHTTPStoreRequestDelegate;
@class NSMutableDictionary, SUXMLHTTPStoreRequestOperation, SSMutableURLRequestProperties, NSDictionary, NSString, SSAuthenticationContext, ISDataProvider, WebScriptObject;

@interface SUScriptXMLHTTPStoreRequest : SUScriptObject {

	id<SUScriptXMLHTTPStoreRequestDelegate> _delegate;
	NSMutableDictionary* _functions;
	SUXMLHTTPStoreRequestOperation* _operation;
	unsigned long long _readyState;
	SSMutableURLRequestProperties* _requestProperties;
	NSDictionary* _responseHeaders;
	NSString* _responseText;
	BOOL _shouldSendGUIDHeader;
	unsigned long long _status;
	NSString* _statusText;
	unsigned long long _timeout;
	BOOL _useJSONEncoding;
	SSAuthenticationContext* _authenticationContext;
	ISDataProvider* _dataProvider;

}

@property (__weak) id<SUScriptXMLHTTPStoreRequestDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISDataProvider * dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (getter=isJSONEncoded,retain) id JSONEncoded; 
@property (readonly) unsigned long long readyState; 
@property (copy,readonly) NSString * responseText; 
@property (retain) id shouldSendGUIDHeader; 
@property (readonly) unsigned long long status; 
@property (copy,readonly) NSString * statusText; 
@property (assign) unsigned long long timeout; 
@property (retain) WebScriptObject * onabort; 
@property (retain) WebScriptObject * onerror; 
@property (retain) WebScriptObject * onload; 
@property (retain) WebScriptObject * onloadend; 
@property (retain) WebScriptObject * onreadystatechange; 
@property (retain) WebScriptObject * ontimeout; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)abort;
-(NSString *)statusText;
-(id)attributeKeys;
-(unsigned long long)timeout;
-(void)dealloc;
-(id)_uniqueDeviceID;
-(WebScriptObject *)onload;
-(unsigned long long)readyState;
-(unsigned long long)status;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(WebScriptObject *)onabort;
-(WebScriptObject *)onerror;
-(SSAuthenticationContext *)authenticationContext;
-(void)setDelegate:(id<SUScriptXMLHTTPStoreRequestDelegate>)arg1 ;
-(id)_className;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(ISDataProvider *)dataProvider;
-(id<SUScriptXMLHTTPStoreRequestDelegate>)delegate;
-(id)scriptAttributeKeys;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1 ;
-(NSString *)responseText;
-(void)_callFunctionWithName:(id)arg1 arguments:(id)arg2 ;
-(id)_gsTokenForAIDAAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)_clientInfoHeader;
-(id)_scriptObjectForFunctionName:(id)arg1 ;
-(void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2 ;
-(void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5 ;
-(void)sendWithBodyData:(id)arg1 ;
-(id)isJSONEncoded;
-(WebScriptObject *)onloadend;
-(WebScriptObject *)onreadystatechange;
-(WebScriptObject *)ontimeout;
-(void)setJSONEncoded:(id)arg1 ;
-(void)setOnabort:(WebScriptObject *)arg1 ;
-(void)setOnerror:(WebScriptObject *)arg1 ;
-(void)setOnload:(WebScriptObject *)arg1 ;
-(void)setOnloadend:(WebScriptObject *)arg1 ;
-(void)setOnreadystatechange:(WebScriptObject *)arg1 ;
-(void)setOntimeout:(WebScriptObject *)arg1 ;
-(void)setShouldSendGUIDHeader:(id)arg1 ;
-(id)shouldSendGUIDHeader;
@end

