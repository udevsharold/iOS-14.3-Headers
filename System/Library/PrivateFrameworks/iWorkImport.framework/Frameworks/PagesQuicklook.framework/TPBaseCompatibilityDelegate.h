/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSKCompatibilityDelegate.h>

@class NSString;

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(id)nestedDocumentFilename;
-(Class)importerClassForType:(id)arg1 path:(id)arg2 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(BOOL)isSageDocumentType:(id)arg1 ;
-(BOOL)isIBADocumentType:(id)arg1 ;
-(BOOL)isTextOnlyType:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(BOOL)isExportSupportedForType:(id)arg1 exporterOptions:(id)arg2 documentRoot:(id)arg3 ;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)unsupportedExportMessageStringForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned long long)arg1 ;
-(id)EPUBExportCategories;
-(id)EPUBExportLanguageCodes;
@end

