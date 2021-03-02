/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, WKFrameInfo, NSURLRequest, NSURLResponse;

@interface WKNavigationResponse : NSObject <WKObject> {

	ObjectStorage<API::NavigationResponse> _navigationResponse;

}

@property (nonatomic,readonly) NSString * _sf_suggestedFilename; 
@property (nonatomic,readonly) NSString * _sf_explicitSuggestedFilename; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (nonatomic,readonly) NSString * _downloadAttribute; 
@property (getter=isForMainFrame,nonatomic,readonly) BOOL forMainFrame; 
@property (nonatomic,copy,readonly) NSURLResponse * response; 
@property (nonatomic,readonly) BOOL canShowMIMEType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_sf_explicitSuggestedFilename;
-(BOOL)_sf_allowReloadingInMainFrame;
-(NSString *)_sf_suggestedFilename;
-(long long)_sf_responsePolicy:(long long*)arg1 uti:(id*)arg2 ;
-(WKFrameInfo *)_frame;
-(NSURLResponse *)response;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isForMainFrame;
-(BOOL)canShowMIMEType;
-(NSString *)_downloadAttribute;
-(NSURLRequest *)_request;
-(Object*)_apiObject;
@end
