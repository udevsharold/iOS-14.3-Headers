/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode {

	UsoEntityNode* _usoEntityNode;

}
-(id)initWithCppEntityNode:(UsoEntityNode*)arg1 ;
-(void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 ;
-(void)addUtteranceAlignmentWithAsrIndex:(unsigned)arg1 StartIndex:(unsigned)arg2 endIndex:(unsigned)arg3 startUnicodeScalarIndex:(unsigned)arg4 endUnicodeScalarIndex:(unsigned)arg5 ;
@end
