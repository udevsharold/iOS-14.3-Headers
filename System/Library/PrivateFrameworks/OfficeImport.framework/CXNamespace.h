/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;
	CXNamespace* mFallbackNamespace;

}

@property (nonatomic,retain) CXNamespace * fallbackNamespace; 
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(const char*)uri;
-(id)init;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(CXNamespace *)fallbackNamespace;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
-(id)initWithUri:(const char*)arg1 ;
-(const char*)fallbackUri;
-(id)initWithUri:(const char*)arg1 fallbackNamespace:(id)arg2 ;
-(void)setFallbackNamespace:(CXNamespace *)arg1 ;
@end
