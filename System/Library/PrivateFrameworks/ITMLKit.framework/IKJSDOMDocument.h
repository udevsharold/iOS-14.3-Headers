/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;


@protocol IKJSDOMDocument <JSExport>
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) BOOL xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) BOOL strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(void)setNeedsUpdate;
-(IKDOMElement *)documentElement;
-(id)createTextNode:(id)arg1;
-(IKDOMImplementation *)implementation;
-(id)createDocumentFragment;
-(id)getElementsByTagName:(id)arg1;
-(id)createElement:(id)arg1;
-(id)getElementById:(id)arg1;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(id)arg1;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1;
-(NSString *)documentURI;
-(void)setDocumentURI:(id)arg1;
-(id)createComment:(id)arg1;
-(id)createCDATASection:(id)arg1;
-(id)adoptNode:(id)arg1;
-(IKJSNavigationDocument *)navigationDocument;
-(BOOL)strictErrorChecking;
-(void)setStrictErrorChecking:(BOOL)arg1;

@end

