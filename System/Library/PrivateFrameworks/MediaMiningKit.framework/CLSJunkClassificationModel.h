/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSClassificationBasedSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSJunkClassificationModel : NSObject <CLSClassificationBasedSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _negativeNode;
	CLSSignalNode* _nonMemorableNode;
	CLSSignalNode* _poorQualityNode;
	CLSSignalNode* _textDocumentNode;
	CLSSignalNode* _tragicFailureNode;
	CLSSignalNode* _tragicFailureInternalNode;
	CLSSignalNode* _screenshotNode;
	CLSSignalNode* _badFramingNode;
	CLSSignalNode* _badLightingNode;
	CLSSignalNode* _blurryNode;
	CLSSignalNode* _foodOrDrinkNode;
	CLSSignalNode* _otherNode;
	CLSSignalNode* _medicalReferenceNode;
	CLSSignalNode* _negativeInternalNode;
	CLSSignalNode* _receiptOrDocumentNode;
	CLSSignalNode* _repairReferenceNode;
	CLSSignalNode* _shoppingReferenceNode;
	CLSSignalNode* _utilityReferenceNode;
	CLSSignalNode* _legacyNode;

}

@property (readonly) CLSSignalNode * negativeNode;                            //@synthesize negativeNode=_negativeNode - In the implementation block
@property (readonly) CLSSignalNode * nonMemorableNode;                        //@synthesize nonMemorableNode=_nonMemorableNode - In the implementation block
@property (readonly) CLSSignalNode * poorQualityNode;                         //@synthesize poorQualityNode=_poorQualityNode - In the implementation block
@property (readonly) CLSSignalNode * textDocumentNode;                        //@synthesize textDocumentNode=_textDocumentNode - In the implementation block
@property (readonly) CLSSignalNode * tragicFailureNode;                       //@synthesize tragicFailureNode=_tragicFailureNode - In the implementation block
@property (readonly) CLSSignalNode * tragicFailureInternalNode;               //@synthesize tragicFailureInternalNode=_tragicFailureInternalNode - In the implementation block
@property (readonly) CLSSignalNode * screenshotNode;                          //@synthesize screenshotNode=_screenshotNode - In the implementation block
@property (readonly) CLSSignalNode * badFramingNode;                          //@synthesize badFramingNode=_badFramingNode - In the implementation block
@property (readonly) CLSSignalNode * badLightingNode;                         //@synthesize badLightingNode=_badLightingNode - In the implementation block
@property (readonly) CLSSignalNode * blurryNode;                              //@synthesize blurryNode=_blurryNode - In the implementation block
@property (readonly) CLSSignalNode * foodOrDrinkNode;                         //@synthesize foodOrDrinkNode=_foodOrDrinkNode - In the implementation block
@property (readonly) CLSSignalNode * otherNode;                               //@synthesize otherNode=_otherNode - In the implementation block
@property (readonly) CLSSignalNode * medicalReferenceNode;                    //@synthesize medicalReferenceNode=_medicalReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * negativeInternalNode;                    //@synthesize negativeInternalNode=_negativeInternalNode - In the implementation block
@property (readonly) CLSSignalNode * receiptOrDocumentNode;                   //@synthesize receiptOrDocumentNode=_receiptOrDocumentNode - In the implementation block
@property (readonly) CLSSignalNode * repairReferenceNode;                     //@synthesize repairReferenceNode=_repairReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * shoppingReferenceNode;                   //@synthesize shoppingReferenceNode=_shoppingReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * utilityReferenceNode;                    //@synthesize utilityReferenceNode=_utilityReferenceNode - In the implementation block
@property (readonly) CLSSignalNode * legacyNode;                              //@synthesize legacyNode=_legacyNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)currentAnalyzerVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)latestVersion;
+(id)name;
-(CLSSignalNode *)utilityReferenceNode;
-(CLSSignalNode *)tragicFailureInternalNode;
-(id)nodeForSignalIdentifier:(unsigned long long)arg1 ;
-(CLSSignalNode *)shoppingReferenceNode;
-(unsigned long long)minimumSupportedVersion;
-(void)setupVersion31;
-(CLSSignalNode *)otherNode;
-(BOOL)isResponsibleForSignalIdentifier:(unsigned long long)arg1 ;
-(CLSSignalNode *)negativeInternalNode;
-(CLSSignalNode *)screenshotNode;
-(void)setupVersion32;
-(CLSSignalNode *)blurryNode;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(CLSSignalNode *)legacyNode;
-(void)setupVersion40;
-(CLSSignalNode *)repairReferenceNode;
-(CLSSignalNode *)textDocumentNode;
-(id)modelInfo;
-(CLSSignalNode *)badLightingNode;
-(unsigned long long)version;
-(CLSSignalNode *)medicalReferenceNode;
-(CLSSignalNode *)badFramingNode;
-(CLSSignalNode *)nonMemorableNode;
-(CLSSignalNode *)negativeNode;
-(CLSSignalNode *)tragicFailureNode;
-(CLSSignalNode *)foodOrDrinkNode;
-(CLSSignalNode *)receiptOrDocumentNode;
-(void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2 ;
-(CLSSignalNode *)poorQualityNode;
@end
