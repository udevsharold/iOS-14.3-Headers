/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKAttachmentInfo, NSString;

@interface _WKAttachment : NSObject <WKObject> {

	ObjectStorage<API::Attachment> _attachment;

}

@property (nonatomic,readonly) _WKAttachmentInfo * info; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestInfo:(/*^block*/id)arg1 ;
-(_WKAttachmentInfo *)info;
-(void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)uniqueIdentifier;
-(NSString *)description;
-(BOOL)isConnected;
-(Object*)_apiObject;
@end

