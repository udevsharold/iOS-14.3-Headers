/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreDAVXMLData_Impl, NSMutableDictionary, NSMutableArray, NSData;

@interface CoreDAVXMLData : NSObject {

	BOOL _shouldAddFormattingSpaces;
	CoreDAVXMLData_Impl* _dataImpl;
	BOOL _docHasEnded;
	NSMutableDictionary* _seenURIsToPrefixes;
	NSMutableDictionary* _seenURIsToDepth;
	NSMutableArray* _elementStack;

}

@property (assign,nonatomic) BOOL shouldAddFormattingSpaces;              //@synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)string:(id)arg1 isEqualToXmlCharString:(const char*)arg2 ;
-(id)init;
-(NSData *)data;
-(void)dealloc;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)endElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)setShouldAddFormattingSpaces:(BOOL)arg1 ;
-(const char*)_prefixForNameSpace:(const char*)arg1 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char*)arg4 ;
-(BOOL)shouldAddFormattingSpaces;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
@end
