/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUCorePolicyExtensionProtocol <NSSecureCoding>
@optional
-(void)extendMSUApplyOptions:(id)arg1;
-(BOOL)isSupervisedPolicy;

@required
-(id)summary;
-(id)copyWithZone:(NSZone*)arg1;
-(id)extensionName;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
-(void)extendDocumentationMAAssetQuery:(id)arg1;
-(id)filterSoftwareUpdateAssetArray:(id)arg1;
-(id)filterDocumentationAssetArray:(id)arg1;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1;

@end
