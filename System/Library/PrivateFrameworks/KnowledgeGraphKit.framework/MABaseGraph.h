/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class MAGraphSpecification, NSUUID, NSString;

@interface MABaseGraph : NSObject <NSXMLParserDelegate> {

	MAGraphSpecification* _specification;

}

@property (assign,nonatomic) unsigned long long version; 
@property (readonly) MAGraphSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) BOOL isReadOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)graph;
+(void)deleteMarker:(id)arg1 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(void)enableKGDB;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(void)disableKGDB;
+(id)graphWithVisualString:(id)arg1 error:(id*)arg2 ;
+(id)defaultSpecification;
+(id)visualStringWithFormat:(id)arg1 elements:(id)arg2 ;
+(BOOL)scanMatchString:(id)arg1 definitions:(id*)arg2 constraints:(id*)arg3 forCreation:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)scanGraphElementString:(id)arg1 type:(unsigned long long*)arg2 optionalName:(id*)arg3 label:(id*)arg4 optionalDomains:(id*)arg5 optionalProperties:(id*)arg6 error:(id*)arg7 ;
+(id)scanGraphConstraintString:(id)arg1 error:(id*)arg2 ;
+(BOOL)scanGraphElementOptionsString:(id)arg1 minimum:(unsigned long long*)arg2 maximum:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)graphWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
+(BOOL)populateGraph:(id)arg1 withDefinitions:(id)arg2 constraints:(id)arg3 error:(id*)arg4 ;
+(id)dataURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphMLURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphJSONURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphWithMergedGraphs:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(id)allEdges;
-(BOOL)hasMarker;
-(void)closePersistentStore;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(id)edgesDomains;
-(unsigned long long)nodesCount;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)leaveBatch;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(BOOL)isReadOnly;
-(id)nodesForDomains:(id)arg1 ;
-(BOOL)hasPendingWrite;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(MAGraphSpecification *)specification;
-(void)invalidateMemoryCaches;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(id)init;
-(id)dataRepresentation:(id*)arg1 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)removeEdge:(id)arg1 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(id)nodesLabels;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(Class)nodeClass;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)compareWithPersistedState;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)removeNodes:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)unloadDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)hash;
-(id)databaseURL;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCount;
-(id)_graphJSONDictionary;
-(NSUUID *)identifier;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesDomains;
-(void)removeNodeEdges:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)orphanNodes;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(void)enterBatch;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)setMarker;
-(unsigned long long)version;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(id)nodesForIdentifiers:(id)arg1 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(id)allNodes;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)edgesForDomains:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)deleteMarker;
-(id)schema:(id)arg1 ;
-(BOOL)hasPendingRead;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(id)addNodeFromBase:(id)arg1 ;
-(void)loadDomains:(id)arg1 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(id)addNodeWithLabel:(id)arg1 ;
-(BOOL)savePersistentStore;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)matchWithVisualString:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeDataToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)matchWithVisualFormat:(id)arg1 elements:(id)arg2 error:(id*)arg3 ;
-(id)nodeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 ;
-(id)initWithDataURL:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)matchWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
-(id)abstractEdges;
-(id)initWithPersistenceOptions:(long long)arg1 ;
-(id)graphNode;
-(id)addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)anyEdgeMatchingFilter:(id)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 ;
-(id)_constraintAbstractEdgesFromAbstractNode:(id)arg1 inConstraints:(id*)arg2 ;
-(BOOL)_matchNode:(id)arg1 usingAbstractNode:(id)arg2 fromEdge:(id)arg3 atIteration:(unsigned long long)arg4 withDefinitions:(id)arg5 constraints:(id)arg6 unusedConstraints:(id)arg7 andSubGraph:(id)arg8 matchingNodeQueue:(id)arg9 ;
-(BOOL)updateGraphWithVisualString:(id)arg1 ;
-(id)selectBestRootNodeForPath:(id)arg1 withDefinitions:(id)arg2 ;
-(BOOL)writeGraphJSONToURL:(id)arg1 error:(id*)arg2 ;
-(id)_graphDictionary;
-(id)shortestPathFromNode:(id)arg1 toNode:(id)arg2 directed:(BOOL)arg3 ;
-(void)depthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)breadthFirstSearchFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 createdNodes:(out id*)arg4 createdEdges:(out id*)arg5 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(BOOL)conformsToGraphSchema:(id)arg1 ;
@end

